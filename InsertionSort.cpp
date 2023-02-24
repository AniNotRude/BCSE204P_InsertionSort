#include<iostream>
#include<vector>
using namespace std;

int main()
{

    //Initialising Variables
    vector<int> element;
    int temp,i,n,e;
    
    //Taking number of inputs
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    //Taking Inputs
    //Adding inputs to vector
    for(i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>e;
	    element.push_back(e);
    }
    
    
	//Sorting the list of elements
    for(i=0;i<n;i++){
        temp=element[i+1];
        while(element[i]>temp)
        {
            element[i+1]=element[i];
            i=i-1;
        }
        element[i+1]=temp;
    }
    
    //Printing the sorted list
    cout<<"Sorted Elements: ";
    for(i=0;i<n;i++){
        cout<<element[i+1]," ";
    }
    
    
    
    
}
