
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> vector1, vector2;
    vector<vector<int>> vector2d;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Vector 1 content:" << endl;
    for(int i=0; i<vector1.size(); i++){
        cout << vector1.at(i) << endl;
    }
    cout << "Vector 1 size: " << vector1.size() << endl << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Vector 2 content:" << endl;
    for(int i=0; i<vector2.size(); i++){
        cout << vector2.at(i) << endl;
    }
    cout << "Vector 2 size: " << vector2.size() << endl << endl;

    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    
    cout << "Vector 2d content:" << endl;
    for(int i=0; i<vector2d.size(); i++){
        for(int j=0; j<vector2d.at(i).size(); j++){
            cout << vector2d.at(i).at(j) << endl;
        }
    }

    vector1.at(0) = 1000;

    cout << "Vector 2d content:" << endl;
    for(int i=0; i<vector2d.size(); i++){
        for(int j=0; j<vector2d.at(i).size(); j++){
            cout << vector2d.at(i).at(j) << endl;
        }
    }

    cout << "Vector 1 content:" << endl;
    for(int i=0; i<vector1.size(); i++){
        cout << vector1.at(i) << endl;
    }

    return 0;
}