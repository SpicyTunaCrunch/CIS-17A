/*
8.12 Mini Programming Project
Luis Roldan
*/

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
using namespace std;
void rollDie(vector<int>&);
int numOnes(vector<int>&);
int numTwos(vector<int>&);
int numThrees(vector<int>&);
int numFours(vector<int>&);
int numFives(vector<int>&);
int numSixes(vector<int>&);

int main() {
        //random seed using current time
    srand(static_cast<unsigned int>(time(0)));

    vector<int> rslts(100); 

    cout << "\nRolling Dice 100 times\n\n";
    rollDie(rslts);

        //Displaying resutls for each number
    cout << " Talling up results\n" <<
            "Quantity of 1's rolled: " << numOnes(rslts) << endl <<  
            "Quantity of 2's rolled: " << numTwos(rslts) << endl <<              
            "Quantity of 3's rolled: " << numThrees(rslts) << endl <<              
            "Quantity of 4's rolled: " << numFours(rslts) << endl <<              
            "Quantity of 5's rolled: " << numFives(rslts) << endl <<              
            "Quantity of 6's rolled: " << numSixes(rslts) << endl;    
            
      //making sure it was 100 rolls
  cout << "For a total of " << ( numOnes(rslts) + numTwos(rslts)+
                                  numThrees(rslts) + numFours(rslts) +
                                  numFives(rslts) + numSixes(rslts) ) <<
                            " rolls !\n";

    return 0;

} 
void rollDie(vector<int>& vect){

        //rolling dice and filling vector
    for (int i = 0; i < 100; i++){
        vect[i] = (rand() % 6) + 1;
    }
/*
      //making sure dice roll fills vector
    for (int i = 0; i < 30; i++){
        cout << vect[i] << " ";
    }
*/
}
int numOnes(vector<int>& vect){
    int count = 0;
    for (int i = 0; i < 100; i++){
        if (vect[i] == 1){
            count ++;
        }
    }
    return count;
}
int numTwos(vector<int>& vect){
    int count = 0;
    for (int i = 0; i < 100; i++){
        if (vect[i] == 2){
            count ++;
        }
    }
    return count;
}
int numThrees(vector<int>& vect){
    int count = 0;
    for (int i = 0; i < 100; i++){
        if (vect[i] == 3){
            count ++;
        }
    }
    return count;
}
int numFours(vector<int>& vect){
    int count = 0;
    for (int i = 0; i < 100; i++){
        if (vect[i] == 4){
            count ++;
        }
    }
    return count;
}
int numFives(vector<int>& vect){
    int count = 0;
    for (int i = 0; i < 100; i++){
        if (vect[i] == 5){
            count ++;
        }
    }
    return count;
}
int numSixes(vector<int>& vect){
    int count = 0;
    for (int i = 0; i < 100; i++){
        if (vect[i] == 6){
            count ++;
        }
    }
    return count;
}


