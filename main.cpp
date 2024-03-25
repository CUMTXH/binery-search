// find the last index meet "a[l] <= q"
int find(int q) {
  int l = 0 , r = n+1 ;
  while(l+r<r) {
    int mid = l+r>>1;
    if(a[mid] <= q) l = mid;
    else r = mid;
  }
  return l;
}

// find the last index meet "a[r] >= q"
int find(int q) {
  int l = 0 , r = n+1 ;
  while(l+r<r) {
    int mid = l+r>>1;
    if(a[mid] >= q) r = mid;
    else l= mid;
  }
  return r;
}
