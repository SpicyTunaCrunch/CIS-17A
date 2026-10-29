/*
Following along to the lecture, 8.12 Vectors
*/

#include <iostream> //input output 
#include <vector> //vector header file
using namespace std;

int main (){

/*          //DATA TYPE
    vector <string> names; //defines names as an empty vector of string objects.
    vector <int> scores(15); // Defines scores as a vector of 15 ints
    vector<char> letters(25, 'A'); //defines letters as a vector of 25 cahracters.
                                   //Each element is initialized with  'A'
    vector<double> values2(values1); // Defines values2 as a vector of doubles.
                                     //all elements of values1, which is also 
                                     //a vector of doubles. are copied to values2.
    vector<int> length{12, 19, 6}; //in C++ this defines length as a vector of 3 ints, 
                                   //holding the values 12, 10, 6. 

        //Vector Member Functions
    at(position)      //Returns the value of the element located at position in the vector
                      //Ex: x = vect.at(5); -> Addigns the value of vect[5] to x.
    capacity()        //Returns the maximum number that may be stored in the vector w/out
                      //additional memory being allocated. (This is not the same value as 
                      //returned by size member function)
    clear()           //Clears a vector of all its elements
                      //Ex: vect.clear); -> Removes all the elements from vect
    empty()           //Returns true if the vector is empty. Else, it returns false
                      //Ex: if (vect.empty());                   -> if vector is empty 
                      //       cout << "The vector is empty.";   -> the message is displayed.
    pop_back()        // Removes the last element from the vector
                      //Ex: vect.pop_back();  -> Removes the last element of vect, thus
                      //                         reducing its size by 1
    push_back(vakue)  //Stores a value i the last element of the vector. If the vector 
                      //is full or empty, a new element is created.
                      //Ex: vect.push_back(7);  -> Stores 7 in the last element of vect
    reverse()         //Reverses the order of the elements in the vector (the last element
                      //becomes the first element, and the first elemennt becomes the last element)
                      //Ex: vect.reverse();   -> Reverses the order of the elements in vect
    resize(n)         //Resizes the vector to have n elements, where n is greater than the vector's current size.
    resize(n, value)  //If the optional value argument is included, each  new elements will be initialized w/ that value.
                      //Ex where vect currently has 4 elements:
                      //vect.resize(6, 99); -> Adds two elements to the end of vector, each initialized to 99
    size()            //Returns the number of elements in vector
                      //Ex: numElements = vect.size(); -> assigns the size number to variable numElements
    swap(vector2)     //Swaps the contents of the vcector w/ the contents of vector2
                      //Ex: vect1.swap(vect2); -> Swaps the contents of vect1 and vect2

*/
    return 0;
}