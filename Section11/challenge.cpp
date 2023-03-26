#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

void display_menu();
char read_selection();
void print_data(vector<int>);
vector<int> add_num(vector<int>);
void mean_menu(vector<int>);
double mean(vector<int>);
void smallest_menu(vector<int>);
int smallest(vector<int>);
void largest_menu(vector<int>);
int largest(vector<int>);

int main()
{
    char choice;
    bool choice_valid;
    vector<int> data;
    
    do{
        do{
            display_menu();
            
            choice = read_selection();
            
            if(choice == 'P' || choice == 'A' || choice == 'M' || choice == 'S' || choice == 'L' || choice == 'Q'){
                choice_valid = true;
            }else{
                choice_valid = false;
                cout << "Unknown selection, please try again" << endl;
            }
        }while(!choice_valid);
        
        if(choice == 'P'){
            print_data(data);
        }
        
        if(choice == 'A'){
            data = add_num(data);
        }
        
        if(choice == 'M'){
           mean_menu(data); 
        }

        if(choice == 'S'){
            smallest_menu(data);
        }

        if(choice == 'L'){
            largest_menu(data);
        }
        
    }while(toupper(choice) != 'Q');

    return 0;
}

void display_menu(){
    cout << endl << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    
    cout << endl << "Enter your choice: ";
}

char read_selection(){
    char choice;

    cin >> choice;        
    choice = toupper(choice);

    return choice;
}

void print_data(vector<int> data){
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

vector<int> add_num(vector<int> data){
    int add;

    cout << "Enter an integer to add to the list: " << endl;
    cin >> add;
    data.push_back(add);
    cout << add << " added" << endl;

    return data;
}

void mean_menu(vector<int> data){
    if(data.empty()){
        cout << "Unable to calculate the mean - no data" << endl;
    }else{
        cout << "The mean is: " << mean(data) << endl;
    }
}

void smallest_menu(vector<int> data){
    if(data.empty()){
        cout << "Unable to determinate the smallest number - list is empty" << endl;
    }else{
        cout << "The smallest number is: " << smallest(data) << endl;
    }
}

void largest_menu(vector<int> data){
    if(data.empty()){
        cout << "Unable to determinate the largest number - list is empty" << endl;
    }else{
        cout << "The smallest number is: " << largest(data) << endl;
    }
}

double mean(vector<int> data){
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

    return mean;
}

int smallest(vector<int> data){
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

    return smallest;
}

int largest(vector<int> data){
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
    
    return largest;
}