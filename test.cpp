#include <iostream>
using namespace std;
int
main ()
{
  double x[2], w[2], y, yd, theta, alpha,err=0;

  cout << "what is x1 and weight1" << endl;
  cin >> x[0];
  cin >> w[0];
  cout << "what is x2 and weight2" << endl;
  cin >> x[1];
  cin >> w[1];
  cout << "what is theta and alpha?" << endl;
  cin >> theta;
  cin >> alpha;
  y = x[0] * w[0] + x[1] * w[1] - theta;
  cout << "y: " << y << endl;
  y = (y > 0) ? 1 : 0;
  cout << "after step y: " << y << "\nwhat is yd?" << endl;
  cin >> yd;
  if (yd == y)
    cout << "*********NO ERROR*********\n";
  else
    {
      cout<<"==========ERROR===========\n";    
      w[0] = w[0] + alpha * (yd - y) * x[0];
      w[1] = w[1] + alpha * (yd - y) * x[1];
      theta = theta + alpha * (yd - y);
      cout << "updated w1: " << w[0] << endl;
      cout << "updated w2: " << w[1] << endl;
      cout << "updated theta: " << theta << endl;
      err++;
    }
  for (int i = 0; i < 3; i++)
    {
      cout << "what is x1" << endl;
      cin >> x[0];
      cout << "what is x2" << endl;
      cin >> x[1];
      y = x[0] * w[0] + x[1] * w[1] - theta;
      cout << "y: " << y << endl;
      y = (y > 0) ? 1 : 0;
      cout << "after step y: " << y << "\nwhat is yd?" << endl;
      cin >> yd;
      if (yd == y)
	cout << "*********NO ERROR*********\n";
      else
	{
	    cout<<"==========ERROR===========\n"; 
	  w[0] = w[0] + alpha * (yd - y) * x[0];
	  w[1] = w[1] + alpha * (yd - y) * x[1];
	  theta = theta + alpha * (yd - y);
	  cout << "updated w1: " << w[0] << endl;
	  cout << "updated w2: " << w[1] << endl;
	  cout << "updated theta: " << theta << endl;
	  err++;
	}
	cout<<"errors "<<err<<endl;
    }
  return 0;
}
