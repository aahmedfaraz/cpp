#include <iostream>
// #include <bitset>
// #include <vector>
// #include <algorithm>
// using namespace std;



int main() {





    // // struct Print {
    // //     int size{1};
    // //     void operator()(int x) {
    // //         size++;
    // //         std::cout << x << " ";
    // //     }
    // // };
    // std::vector<int> nums{1, 2, 3, 4, 5};
    // int a{10};

    // // std::for_each(nums.begin(), nums.end(), inc); 
    // // Output: 2 4 6 8 10

    // // [ captures ] ( params) { body }

    // int size = 0;
    // std::for_each(nums.begin(), nums.end(), [size](int x) mutable { // pass capture by value, but mutable allows us to modify the captured variable inside the lambda
    //     size++; // locally changes only, not reflected outside the lambda
    //     // std::cout << x * 3 << " ";
    // });
    // // Output: 3 6 9 12 15
    // std::cout << "\nSize: " << size << std::endl; // Output: Size: 0
    
    // std::for_each(nums.begin(), nums.end(), [&size](int x) { // pass capture by reference, so changes are reflected outside the lambda
    //     size++; // reflects outside the lambda
    //     // std::cout << x * 3 << " ";
    // });
    // std::cout << "\nSize: " << size << std::endl; // Output: Size: 5

    


    // vector<int> v{1, 2, 3, 4, 5};
    // vector<int>::iterator i = v.begin();
    // while (i != v.end()) {
    //     cout << *i << " ";
    //     i++;
    // }
    // 1 2 3 4 5
    // for (auto i = v.begin(); i != v.end(); ++i) {
    //     cout << *i << " ";
    // }
    // 1 2 3 4 5
    // for (auto element: v) {
    //     cout << element << " ";
    // }
    // 1 2 3 4 5
    // // lesson: ways of iterating through a vector in C++.




    // // template <typename T, typename U> // Function Template
    // // auto max(T a, U b) {
    // //     return (a > b) ? a : b;
    // // }
    // cout << max(3.14, 2.2) << endl; // Output: 3.14
    // cout << max(3, 2.2) << endl; // Output: 3


    

    // // template <class T>
    // // class Score {
    // // public:
    // //     T score;
    // //     void which_type() {
    // //         cout << "Type is : " << typeid(score).name() << endl;
    // //     }
    // // };

    // Score<int> score1;
    // score1.score = 100;
    // score1.which_type(); // Output: Type is : i (i stands for int)

    // Score<float> score2;
    // score2.score = 99.5;
    // score2.which_type(); // Output: Type is : f (f stands for float)

    // Score<double> score3;
    // score3.score = 99.565656565;
    // score3.which_type(); // Output: Type is : d (d stands for double)

    // Score<long> score4;
    // score4.score = 1000000000;
    // score4.which_type(); // Output: Type is : l (l stands for long)




    // // OPERATOR OVERLOADING
    // //  class Game {
    // //  private:
    // //      int level;
    // //  public:
    // //      Game(int level) {
    // //          this->level = level;
    // //      }
    // //      // operator overloading
    // //     void operator++() {
    // //         level++;
    // //     }
    // //     void status() {
    // //         cout << "Current level: " << level << endl;
    // //     }
    // // };

    // // Operator Overloading is Compile-time Polymorphism.
    // // Game game(1); // c++ manages the object's lifetime automatically.
    // Game* game = new Game(1); // dynamically allocated object, we need to delete it manually to avoid memory leak.

    // game->status(); // Current level: 1
    // ++*(game);
    // game->status(); // Current level: 2
    // ++*(game);
    // game->status(); // Current level: 3

    // cout << "Game object pointer before deletion. " << game << endl;
    // delete game; // free the memory allocated for the object
    // cout << "Game object deleted." << game << endl; // dangling pointer.
    // game->status(); // undefined behavior, accessing deleted object.
    // game = nullptr; // good practice to set the pointer to nullptr after deleting it to avoid dangling pointer.
    // cout << "Game pointed to null." << game << endl;

    // Game game2(1); // stack allocated object, automatically destroyed when it goes out of scope.
    // game2.status(); // Current level: 1
    // ++game2;
    // game2.status(); // Current level: 2
    // ++game2;
    // game2.status(); // Current level: 3

    // // lesson: creating instance with game(1) or new Game(1) is different. 
    // // The first one is stack allocated and the second one is heap allocated. 
    // // The first one is automatically destroyed when it goes out of scope, 
    // // while the second one needs to be manually deleted to avoid memory leak.




    // // let see what are next 10 values of the variable a after incrementing it by 1
    // int a = 10;
    // auto* ptr = &a;
    // for (int i = 0; i < 10; ++i) {
    //     cout << "Value at " << ptr << " is " << *ptr << endl;
    //     ptr++;
    // }
    // // lesson: we can see the values of the variable a and the next 10 values in memory by using pointer arithmetic.




    // unsigned int a = 10;
    // for (int i = 31; i >= 0; i--) {
    //     cout << ((a >> i) & 1);
    // }
    // cout << '\n';
    // // lesson: we can see the bits of the variable a by using bitwise operations and shifting.




    // int address = reinterpret_cast<int>(a);
    // cout << "Address in decimal: " << address << '\n';
    // cout << "Address in hex:     " << hex << address << '\n';
    // cout << "Address in binary:  " << bitset<sizeof(a) * 8>(address) << '\n';
    // // lesson: we can see the bits of the variable a by using bitwise operations and shifting.




    // for (int i = 0; i < 4; ++i) {
    //     cout << ptr << " " << *ptr << "\n";
    //     ptr++;
    // }




    // for (int i = 0; i < 5; i++) {
    //     cout << i;
    // }
    // cout << endl;
    // for (int i = 0; i < 5; ++i) {
    //     cout << i;
    // }
    // // lesson: ++i or i++ in the for loop does not make a difference in the output, 
    // // but it can have performance implications in certain cases. 
    // // In general, it's a good practice to use pre-increment (++i) when the incremented value is not needed.




    // cout << ~5 << endl; // Output: -6
    // cout << ~5+1 << endl; // Output: -5
    // // lesson: to convert a number to its negative, you can use the bitwise NOT operator (~) and add 1 to it. 
    // // This is known as two's complement representation.



    return 0;
}