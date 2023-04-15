#include<iostream>
using namespace std;
int firstOcc(int arr[], int size, int key){
	int start = 0;
	int end = size-1;
	int ans = -1;
	int mid= start+(end -start)/2;

	
	while(start<=end){
		
		if(arr[mid] == key){
			ans = mid;
			end= mid-1;
			
		}
		else if(key > arr[mid]){//right m jao
			start=mid+1;
			
		}
		else if(key < arr[mid]){
			end=mid-1;
			
		}
			 mid= start+(end -start)/2;
		
	}
	return ans;

}
//last occurance:

int lastOcc(int arr[], int size, int key){
	int start = 0;
	int end = size-1;
	int ans = -1;
	int mid= start+(end -start)/2;
	
	while(start<=end){
		
		if(arr[mid] == key){
			ans = mid;
			start= mid+1;
			
		}
		else if(key > arr[mid]){//right m jao
			start=mid+1;
			
		}
		else if(key < arr[mid]){
			end=mid-1;
			
		}
			 mid= start+(end -start)/2;
		
	}
	return ans;
	
		
	}
	
int main()
{
	int even[8]={1,2,2,3,3,3,5,9};
	cout<<"First occurance of 3 is at index "<<firstOcc(even, 8, 3)<<endl;
	cout<<"last Occurance of 3 at index "<<lastOcc(even, 8, 3)<<endl;
	int first = firstOcc(even , 8, 3);
	int last = lastOcc(even, 8, 3);
	int totalOcc =  last - first+1;
	cout<<"total Occurance of 3 is "<<totalOcc;
}






