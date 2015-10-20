namespace TP1 {
int sucesor (int n) {
  return n+1;
}
int sumar(int x, int y) {
  return (x+y);
}
int maximo(int x, int y) {
  if(x>y) return x;
  else return y;
}
bool negar(bool x){
  return !x;
}
bool andLogico(bool x, bool y){
  return (x && y);
}
bool orLogico(bool x, bool y){
  return (x || y);
}
int primera(int* x){
  return x[0];
}
int segunda(int* x){
  return x[1];
}
int sumaPar(int* x){
  return sumar(x[0],x[1]);
}
int maxDelPar(int* x){
  return maximo(x[0],x[1]);
}
}
