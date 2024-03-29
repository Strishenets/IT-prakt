#include <stdio.h>
#include <windows.h>

long long func(int n)  //функція пошуку результату
{
    const int MOD = 12345;
    long long dp[n+1];
    n++;

    dp[0]=1;
    dp[1]=2;
    dp[2]=3;

    for (int i=3; i<=n; i++)
    {
        dp[i]=(dp[i-1]+dp[i-2])%MOD;
    }

    return dp[n];  //повернення результату
}

int main()
{
    int n;
    long long rez;
    SetConsoleOutputCP(1251);
    printf("Введіть довжину послідовності: ");
    scanf("%d", &n);  //введення довжини послідовності

    rez=func(n); //використання функції для пошуку результату

    printf("Кількість шуканих послідовностей за модулем 12345: %lld\n", rez);  //виведення результату

    return 0;
}
