#include <iostream>
#include <vector>
using namespace std;

bool boolpassed(vector<int>& arr, int& count)   // for checking if the student even paased in all subject or not 
{
    count = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] < 33)
        {
            count++;
        }
    }

    if(count > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}


void failedsubjects(vector<int> &arr, int& count){    // for counting the number of subjects in which the student has failed

    if(boolpassed(arr, count) == false){
        cout << "The student has failed in " << count << " subjects." << endl;
    }
    
}


void grades(vector<int>& arr, int& count){     // for calculating the grade of the student based on the total marks obtained in all subjects
    if(boolpassed(arr, count) == true){
        int sum = 0;
        for (int i = 0 ; i < arr.size(); i++){
            sum += arr[i] ;
        }
        if (sum >=450){
            cout << "the student has got A grade" << sum << " out of 500" << endl ;
        }
        else if (sum >= 400){
            cout << "the student has got B grade" << endl << " "<<sum << "  out of 500" << endl ;
        }
        else if (sum >= 350){
            cout << "the student has got C grade" << endl << " "<< sum << "  out of 500" << endl ;
        }
        else if (sum >= 300){
            cout << "the student has got D grade" << endl << " "<< sum << "  out of 500" << endl ;
        }
        else {
            cout << "the student has got E grade" << endl << " "<< sum << "  out of 500" << endl ;
        }

    }
}

int main(){     // for taking the marks of 5 subjects from the user and storing them in a vector

   
    vector<int> arr(5) ; 
    for (int i = 0 ; i< arr.size() ; i++){
        cout <<"Enter the marks of subject" <<"  "<< i+1 << " :" ;
        cin>> arr[i] ; 
    }
    int count = 0 ;
    failedsubjects(arr, count);
    grades(arr, count);
      return 0 ;
    }


    