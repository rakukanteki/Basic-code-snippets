//Check if a string is a alternating binary
//string or not
//01010101 or 10101010
//ex: abacaba -> 0101010 (YES)
for(i=0; i<length; i++)
{
    for(j=0; j<length; j++)
    {
        if(s[i]==s[j] && i%2!=j%2)
        {
            flag=1;
            break;
        }
    }
}
if(flag==1)
{
    cout<<"NO"<<endl;
}
else
{
    cout<<"YES"<<endl;
}