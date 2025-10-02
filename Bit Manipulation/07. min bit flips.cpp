//given start -> flip bits to get end
int i = 0;
int cnt = 0;
while (i < 32) {
  int startbit = (start >> i) & 1;
  int goalbit = (goal >> i) & 1;
    if (startbit != goalbit)
      cnt++;
    i++;
  }
return cnt;
