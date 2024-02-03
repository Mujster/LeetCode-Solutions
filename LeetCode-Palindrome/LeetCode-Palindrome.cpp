//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	Solution() {}
//	bool isPalindrome(int x) {
//		if (x < 0) {
//			return false; 
//		}
//		else {
//			int temp = x,i,k;
//			int count = 0;
//			while (temp != 0) {
//				temp /= 10;
//				count++;
//			}
//			int* digits = new int[count];
//			temp = x;
//			for (i = 0,k=0; i<count; i++,k++) {
//				digits[i] = temp % 10;
//				temp /= 10;
//			}
//			for (int j = 0; j < i; j++,k--) {
//				if (digits[j] != digits[k-1]) {
//					return false;
//				}
//			}
//			return true;
//		}
//	}
//};
//
//int main() {
//	Solution obj;
//	int number;
//	cout << "Enter Number To Check For Palindrome\n";
//	cin >> number;
//	if (obj.isPalindrome(number)) {
//		cout << number<<" Is A Palindrome Number\n";
//	}
//	else {
//		cout << number << " Is Not A Palindrome Number\n";
//	}
//	return 0;
//}