
int main()
{
    int iChelsius,iFahrenheit;
    printf("Pleass enter temperature:\n");
    scanf("%d",&iFahrenheit);
    iChelsius=5*(iFahrenheit-32)/9;
    
    printf("Temperature is:\n");
    printf("%d\n",iChelsius);
    printf("degress Celsius\n");
    return 0;
}
