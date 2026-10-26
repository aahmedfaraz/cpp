#include <iostream>
using namespace std;

class Printer {
    string _name;
    int _availablePaper;
public:
    Printer(string name, int availablePaper): _name(name), _availablePaper(availablePaper) {}

    void print(string txtDoc) {
        int requiredPaper = txtDoc.length() / 10; // assume each page can hold 10 characters
        if (requiredPaper > _availablePaper)
            // throw "No paper";
            // throw 101;
            throw false;
        cout << "Printing..." << txtDoc << endl;
        _availablePaper -= requiredPaper;
    }
};

int main() {
    Printer myPrinter("HP DeskJet 1234", 10);
    try {
        myPrinter.print("Hello, my name is Faraz. I am a Software Engineer.");
        myPrinter.print("Hello, my name is Faraz. I am a Software Engineer.");
        myPrinter.print("Hello, my name is Faraz. I am a Software Engineer.");
    } 
    catch (const char* txtException) {
        cout << "Exception: " << txtException << endl;
    } 
    catch (int exCode) {
        cout << "Exception: " << exCode << endl;
    }
    catch (...) { // default catch block for any other exceptions
        cout << "Exception occurred." << endl;
    }

    std::exit(1); // Exit the program with a non-zero status code to indicate an error to operating system. 
    // This is a standard way to indicate that the program terminated due to an error.
    
    // return 0;
}