#include <iostream>
// Need it to pow
#include <math.h>

using namespace std;

class ProbabilityDistribution {
  public:
    int c, n, x;
    int combinatoria();
    int probability();
};

// Calculate combinatorial number
int ProbabilityDistribution::combinatoria() {
  /*
    n = Total number of events
    x = Number of desired successes
    c = Combinatorial number
    fn = Factorial of n
    fx = Factorial of x
    fnx = Factorial of n - x
  */
  int fn = 1, fx = 1, fnx = 1;

  // Request the values
  cout<<"Ingresa los valores: "<<endl;
  cout<<"Numero total de eventos efectuados: ";
  cin>>n;
  cout<<"Numero de exitos deseados: ";
  cin>>x;

  // Calculate the factorial of n
  for (int i=2; i<=n; i++) {
    fn = fn*i;
  }

  // Calculate the factorial of x
  for (int i=2; i<=x; i++) {
    fx = fx*i;
  }

  // Calculate the factorial of n-x
  for (int i=2; i<= n-x; i++) {
    fnx = fnx*i;
  }

  // Calculate combinatorial number
  c = fn/fx/fnx;

  return c;
};

int ProbabilityDistribution::probability() {
  /*
    p = Probability of success
    q = Probability of failure
  */
  float p, q, r;

  // Request the remaining values
  cout<<"Probabilidad de exito: ";
  cin>>p;
  cout<<"Probabilidad de fracaso: ";
  cin>>q;

  r = c*pow(p, x)*pow(q, n-x);

  cout<<"La probabilidad es de: "<<r<<endl;
};

main(int argc, char const *argv[]) {
  ProbabilityDistribution prob;

  cout<<"Bienvenido a la calculadora de probabilidad"<<endl;

  prob.combinatoria();

  prob.probability();

  return 0;
}
