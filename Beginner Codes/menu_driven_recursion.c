#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#iclude<conio.h>
void factorial();
void GCD();
void fibonacci();
void towerofhanoi();
int main()
{
	int ch;
	while(1)
	{
		printf("\n Recursion Menu ");
		printf("\n\n1.Factorial of a number\n2.GCD of two numbers\n3.Fibonacci series\n4.Tower of Hanoi\n5.Exit");
		printf("\n\nEnter your choice(1-5):");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: factorial();
			break;
			case 2: GCD();
			break;
			case 3: fibonacci();
			break;
			case 4: towerofhanoi();
			break;
			case 5: exit(0);
			default: printf("\nWrong Choice!!");
		}
    }
}
void factorial()
{
	int n;
	long int multiplyNumbers(int n);
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
        
}
long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

void GCD()
{
	int n1, n2;
	int hcf(int n1, int n2);
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
}

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

void fibonacci()
{
	int n, i = 0, c;
    int f(int);
    printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci series terms are:\n");

  for (c = 1; c <= n; c++)
  {
    printf("%d\n", f(i));
    i++;
  }
}

int f(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (f(n-1) + f(n-2));
}

void towerofhanoi()
{
	int num;
    void towers(int, char, char, char);
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}
