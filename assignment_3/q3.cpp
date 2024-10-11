#include <bits/stdc++.h>
using namespace std;


int main()
{


    int n;
    // give the option to the user to use the input method
    cout<<"Choose the option: \n1. Keyboard Input\n2. File Input\n";
    int option;
    cin>>option;

    // if the user chooses input
    if(option==1)
    {
	cout<<"Enter the number of elements: ";
	cin>>n;
	int arr[n];
	// take the input from the user
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}

	// sort array
	sort(arr,arr+n);
	int count=1;

	// print the output
	cout<<"N"<<"  "<<"Count"<<endl;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]==arr[i+1])
	    {
		count++;
	    }
	    else
	    {
		cout<<arr[i]<<"  "<<count<<endl;
		count=1
	    }
	}
    }
    // if the user chooses file input
    else if(option==2)
    {
	// take the file name as input
	string filename
	cout<<"Enter the filename: ";
	cin>>filename;
	ifstream file;
	file.open(filename);
	int arr[50];
	int i=0;
	// read the file
	while(file>>arr[i])
	{
	    i++;
	}

	// sort the array
	sort(arr,arr+i);
	int count=1;

	// print the output
	cout<<"N"<<"  "<<"Count"<<endl;
	for(int j=0;j<i;j++)
	{
	    if(arr[j]==arr[j+1])
	    {
		count;++;
	    }
	    else
	    {
		cout<<arr[j]<<"  "<<count<<endl;
		count=1;
	    }
	}
    }
    else
    }
	cout<<"Invalid Option";
    }
return 0;
}
