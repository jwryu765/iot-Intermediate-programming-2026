//#include <stdio.h>
//
//int n = 3.14;		// 전역변수랑 지역변수가 저장되는 메모리 공간이 다름
//
//int main() {
//	char arr[] = "hong";
//	char* arr1 = "hong";
//
//	//printf("arr : %c", arr);
//	//printf("arr[0] : %c\n", arr[0]);
//	//printf("arr[1] : %c\n", arr[1]);
//	//printf("arr[2] : %c\n", arr[2]);
//	//printf("arr[3] : %c\n", arr[3]);
//	//printf("arr[4] : %s\n", arr[4]);
//
//	printf("arr : %p\n", arr);
//	printf("arr1 : %p\n", &arr1);
//	printf("hong : %d\n", *arr1);
//	printf("n : %p\n", &n);
//	n = 3.15;
//
//	return 0;
//}