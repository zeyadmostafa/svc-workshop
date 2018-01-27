int int main(int argc, char const *argv[])
{
	isprimeNum(3);

	return 0;
}
int isprimeNum(int num){
	int isprimeNum=1;
	for (int divider =1;divider<=/2;divider++){
		if (num % divider ==0 ){
			isprimeNum=0;
		}
	}
	isprimeNum ? printf("%d is prime number\n",num ) : printf("%d is not prime \n", num );
	return isprimeNum;
}
//fixed;
