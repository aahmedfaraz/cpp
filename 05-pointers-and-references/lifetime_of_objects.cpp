#include <iostream>
#include <thread>

// C++ categorizes object storage durations into four main types, 
// which dictate how long an object lives: automatic, static, thread-local, and dynamic.

class Resource {
public:
    Resource(int id) : id_(id) {
        std::cout << "Resource " << id_ << " acquired.\n";
    }
    ~Resource() {
        std::cout << "Resource " << id_ << " destroyed.\n";
    }
    void use() const {
        std::cout << "Using resource " << id_ << ".\n";
    }
private:
    int id_;
};

Resource global_res(1); // Static storage: lives throughout the program

void scope_example() {
    std::cout << "Entering scope.\n";
    Resource local_res(2); // Automatic storage: created here
    local_res.use();
    std::cout << "Exiting scope.\n";
} // local_res's lifetime ends here; destructor runs automatically.

class Worker {
public:
    Worker(int id) : thread_id(id) {
        std::cout << "Thread " << thread_id << " object created.\n";
    }
    ~Worker() {
        std::cout << "Thread " << thread_id << " object destroyed.\n";
    }
    void work() {
        std::cout << "Working on thread " << thread_id << ".\n";
    }
private:
    int thread_id;
};

void thread_function(int id) {
    // Each thread gets its own independent instance of this object
    thread_local Worker worker_instance(id);
    worker_instance.work();
} // worker_instance for this thread is destroyed when the thread exits.

int main() {
    std::cout << "Main starts.\n";
    {
        Resource block_res(3); // Automatic storage in a nested block
    } // block_res is destroyed here, before main finishes.

    scope_example();

    // Dynamic storage
    Resource* dyn_res = new Resource(4);
    dyn_res->use();
    
    // Lifetime must be ended manually for raw pointers
    delete dyn_res; // Destructor runs here. After this, dyn_res is dangling.

    std::thread t1(thread_function, 1);
    std::thread t2(thread_function, 2);
    
    t1.join();
    t2.join();

    std::cout << "Main ends.\n";
    return 0;
} // global_res is destroyed here, after main exits.

// Output:

// Resource 1 acquired.
// Main starts.
// Resource 3 acquired.
// Resource 3 destroyed.
// Entering scope.
// Resource 2 acquired.
// Using resource 2.
// Exiting scope.
// Resource 2 destroyed.
// Resource 4 acquired.
// Using resource 4.
// Resource 4 destroyed.
// Thread Thread 1 object created.
// Working on thread 12 object created.
// Working on thread 2.
// .
// Thread 2 object destroyed.
// Thread 1 object destroyed.
// Main ends.
// Resource 1 destroyed.


// ------------
// If you think the output above about threads is not readable.
// The problem is that both threads are writing to std::cout simultaneously. 
// Their output can interleave, making messages from different threads appear on the same line.
// For example, this:
// Thread Thread 1 object created.