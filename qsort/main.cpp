//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<iostream>
//using namespace std;
//
//const int N = 10;
//
//void quickSort(int s[], int l, int r){
//	if(l < r){
//		int mid = s[l];
//		int i = l;
//		int j = r;
//		while(i < j){
//			while(j > i && s[j] >= mid){
//				j--;
//			}
//			if(j > i){
//				s[i] = s[j];
//				i++;
//			}
//			while(j > i && s[i] < mid){
//				i++;
//			}
//			if(j > i){
//				s[j] = s[i];
//				j--;
//			}
//		}
//		if(i == j){
//			s[i] = mid;
//		}
//		quickSort(s, l, i - 1);
//		quickSort(s, i + 1, r);
//	}
//}
//
//int main()
//{
//	int str[N];
//
//	srand((unsigned)time(NULL));
//	cout << "before:" << endl;
//	for(int i = 0; i < N; i++){
//		str[i] = rand() % 30;
//		cout << str[i] << " ";
//	}
//	cout << endl << "after:" << endl;
//	quickSort(str, 0, N - 1);
//	for(int i = 0; i < N; i++){
//		cout << str[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}