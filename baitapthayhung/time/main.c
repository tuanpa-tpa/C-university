 #include <stdio.h>
 #include <time.h>

 int main()
 {   
    
    clock_t start = clock();// ham bất đầu đếm thời gian thực hiện chương trình



 




	clock_t finish = clock();// ham đếm thời gian kết thúc
	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("\n\n");
	printf("Thoi gian thuc thi: %0.6lf", duration);
    return 0;
 }