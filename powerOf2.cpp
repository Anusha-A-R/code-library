bool isPowerOfTwo(int x)
{
    
     return x && (!(x & (x - 1)));
}

int main()
{
    int n;
    cin>>n;
    isPowerOfTwo(n)? cout<<"Yes\n": cout<<"No\n";
    return 0;
}