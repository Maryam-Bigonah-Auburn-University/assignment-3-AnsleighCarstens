#include <iostream>
#include <string>

using namespace std;

int main()
{
	//declaring and initializing required variables 
	int n1,n2,i;
	int arr1[20]={0},arr2[20]={0},result[20]={0};

	cout<<"Do not enter negative numbers. Doing so will have strange behvaiors

	//getting number of digits input from user number 1
	cout << "Enter the number of digits in first number: \n";
	cin >> n1;

	//checking if that is greater than 20
	if(n1>20 || n1<0){
		//if so display the message and exit the program
		printf("Can add only number up to 20 digits and no negative numbers are
		exit(0);
	}


	//getting number of digits input from user for number 1
	cout << "Enter the every digit of the number  \n";
	for(i=n1-1;i>=0;i--){
	    char ch;
	    cin >> ch;
	    arr1[i]=ch-'0';
	}

	//getting number of digits input from user for 2
	cout <<"Enter the number of digits in secound number: \n";
	cin >> n2;

	//checking if that is greater than 20,
	 if(n2>20 || n2<0){
	     //if so display the message and exit the program
	    printf("Can add only number up to 20 digits");
	    exit(0);
	}

	 //getting a number of digits input from user for number 2
	cout << "Enter the every digit of the number \n";
	 for(i=n2-1;i>=0;i--){
	    char ch;
	    cin >> ch;
	    arr2[i]=ch-'0';
	}

	//determining the maximum and minimum among the lengths of 2 numbers
	int min=0, max=0;

	if (n1<=2) min=n1;
	else  min=n2;

	if (n1>=n2) max=n1;
	else max=n2;

	printf("\n");

	//pencil paper algorithim of adding 
	int sum=0,carry=0,lastIndex=0,flag=0;
	for(i=0;i<max;i++){
	    sum=arr1[i]+arr2[i]+carry;

	    //if the addition came to the last index,
	    //there are still more numbers to process,
	    //then display the following message and end the program 
	    if (i==19 && sum>==10){
		 printf("integer overflow");
		 flag=1;
		 break;
	    }

	    //if sum greater than 10, then assign carry = 1
	    if(sum>=10;
		carry=1;
		sum=sum-10;
	    }

	    //else assign carry = 0
	    else {
		carry=0;	
	    }
	    result[i]=sum;
	}

	// if there is still a carry after completing the calculation,
	// then add it as well to the result array
	if(carry==1){result[i]=carry;}


	//printing the result number;
	if(flag==0){

	    for(i=19;i>=0;i--){
		if(result[i]!=0) {lastIndex=i;break;}
	    }

	    for(i=lastIndex;i>=0;i--){printf("%d",result[i]);}
	}

	return 0;
}
