int arraysEqualorNot(int size_A, int* A, int* B) {
	int a[size_A];
  int  b[size_A],c;
  for(int i=0;i<size_A;i++)
  {
    a[i]=*A;
    b[i]=*B;
    *A++;*B++;
  }
  for(int i=0;i<size_A;i++)
  {
    for(int j=i;j<size_A;j++)
    {
      if(a[i]==b[j])
      {
        c=b[i];
        b[i]=b[j];
        b[j]=c;
      }
    }
  }
  for(int i=0;i<size_A;i++)
  {
    if(a[i]==b[i])
      continue;
    else
      return 0;
  }
  return 1;
}
