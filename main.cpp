


int main()
{
  cout<<"this is a simple test of fibonnacci suite, using a tree to store redundant "
          "\ncalculated fibonacci suites for better performance"<<endl;
    /* the next 2 lines are optional, I added them just to visualize
    the values with precision in case the value calculated is too big */
    cout.precision(0); cout << fixed << endl;
    FibonacciTree F=FibonacciTree();
    long double n=40;
    cout<<"fibonacci of "<<n<<" is : "<<F.fibonacci_of(n)<<endl;
   // here is the tree in which we stored redundant calculated values
   // cout<<F.arbre;

return 0;
}
