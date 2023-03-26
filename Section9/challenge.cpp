#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    char choice;
    bool choice_valid;
    vector<int> data;
    
    do{
        do{
            cout << endl << "P - Print numbers" << endl;
            cout << "A - Add a number" << endl;
            cout << "M - Display mean of the numbers" << endl;
            cout << "S - Display the smallest number" << endl;
            cout << "L - Display the largest number" << endl;
            cout << "Q - Quit" << endl;
            
            cout << endl << "Enter your choice: ";
            cin >> choice;
            
            choice = toupper(choice);
            
            if(choice == 'P' || choice == 'A' || choice == 'M' || choice == 'S' || choice == 'L' || choice == 'Q'){
                choice_valid = true;
            }else{
                choice_valid = false;
                cout << "Unknown selection, please try again" << endl;
            }
        }while(!choice_valid);
        
        if(choice == 'P'){
            if(data.empty()){
                cout << "[] - the list is empty" << endl;
            }else{
                cout << "[ ";
                /*
                for(int i = 0; i < data.size(); i++){
                    cout << data.at(i) << " ";
                }
                */
               for(auto num: data){
                    cout << num << " ";
                }
                cout << "]" << endl;
            }
        }
        
        if(choice == 'A'){
            int add;

            cout << "Enter an integer to add to the list: " << endl;
            cin >> add;
            data.push_back(add);
            cout << add << " added" << endl;
        }
        
        if(choice == 'M'){
            if(data.empty()){
                cout << "Unable to calculate the mean - no data" << endl;
            }else{
                double mean{0};
                /*
                for(int i = 0; i < data.size(); i++){
                    mean += data.at(i);
                }
                */
                for(auto num: data){
                   mean += num;
                }
                mean /= data.size();
                cout << "The mean is: " << mean << endl;
            }
        }

        if(choice == 'S'){
            if(data.empty()){
                cout << "Unable to determinate the smallest number - list is empty" << endl;
            }else{
                int smallest;

                smallest = data.at(0);
                /*
                for(int i = 1; i < data.size(); i++){
                    if(data.at(i) < smallest){
                        smallest = data.at(i);
                    }
                }
                */
                for(auto num: data){
                   if(num < smallest){
                        smallest = num;
                    }
                }
                cout << "The smallest number is: " << smallest << endl;
            }
        }

        if(choice == 'L'){
            if(data.empty()){
                cout << "Unable to determinate the largest number - list is empty" << endl;
            }else{
                int largest;

                largest = data.at(0);
                /*
                for(int i = 1; i < data.size(); i++){
                    if(data.at(i) > largest){
                        largest = data.at(i);
                    }
                }
                */
                for(auto num: data){
                   if(num > largest){
                        largest = num;
                    }
                }
                cout << "The smallest number is: " << largest << endl;
            }
        }
        
    }while(toupper(choice) != 'Q');

    return 0;
}
