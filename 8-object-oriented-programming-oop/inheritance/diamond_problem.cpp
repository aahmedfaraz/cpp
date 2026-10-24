#include <iostream>
using namespace std;

// When working with multiple inheritance in C++, you’ll eventually encounter 
// one of the most confusing yet important concepts: the diamond problem. 
// This issue arises when a class inherits from multiple classes that share a 
// common base class, creating an ambiguous inheritance hierarchy that looks 
// like a diamond shape.

// What is the Diamond Problem?
// The diamond problem occurs when you have a class hierarchy like this:

//     Base
//    /    \
//   A      B
//    \    /
//    Derived

// Let’s see this in action with a practical example. 
// Imagine we’re modeling different types of electronic devices:

class Device {
public:
    int deviceId;
    Device(int id) : deviceId(id) {
        cout << "Device constructor called with ID: " << deviceId << endl;
    }

    void powerOn() {
        cout << "Device " << deviceId << " is powering on." << endl;
    }
};

// To resolve the diamond problem, we can use virtual inheritance.
class Phone: virtual public Device {
public:
    Phone(int id) : Device(id) {
        cout << "Phone constructor called with ID: " << deviceId << endl;
    }

    void makeCall() {
        cout << "Making a call from device " << deviceId << endl;
    }
};

// Similarly, we can have another class that inherits from Device.
class Camera: virtual public Device {
public:
    Camera(int id) : Device(id) {
        cout << "Camera constructor called with ID: " << deviceId << endl;
    }

    void takePhoto() {
        cout << "Taking photo with device " << deviceId << endl;
    }
};

class Smartphone: public Phone, public Camera {
public:
    Smartphone(int id) : Device(id), Phone(id), Camera(id) {
        // Below, "Smartphone::deviceId" is ambiguous because both Phone and Camera inherit from Device,
        // cout << "Smartphone constructor called with ID: " << deviceId << endl;

        // and both have their own copy of deviceId. To resolve this ambiguity, we can
        // explicitly specify which deviceId we want to use.

        cout << "Smartphone constructor called with ID: " << deviceId << endl;
    }
};

//      Device
//     /      \
//  Phone    Camera
//     \      /
//    Smartphone

int main() {
    Smartphone mySmartphone(101);
    mySmartphone.powerOn();     // Calls Device::powerOn()
    mySmartphone.makeCall();    // Calls Phone::makeCall()
    mySmartphone.takePhoto();   // Calls Camera::takePhoto()

    cout << "Device ID: " << mySmartphone.deviceId << endl;

    return 0;
}

// Output

// Device constructor called with ID: 101
// Phone constructor called with ID: 101
// Camera constructor called with ID: 101
// Smartphone constructor called with ID: 101
// Device 101 is powering on.
// Making a call from device 101
// Taking photo with device 101
// Device ID: 101