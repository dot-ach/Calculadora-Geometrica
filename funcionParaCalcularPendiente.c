float EcuasionPendiente(int x1,int y1,int x2,int y2)
{
  int m;
  m = (y2 - y1) / (x2 - y2);
  return m;
}