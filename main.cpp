


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
   
     
     
     
     cout<<"this is a  test of normal fibonnacci suite, just for comparison with mine \n";
    cout.precision(0); cout << fixed << endl;
    long double n=40;
    cout<<"fibonacci of "<<n<<" is : "<<normal_fibonacci(n)<<endl;

return 0;
}
