// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
  int Obj = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        Obj++;
      }
    }
  }
  return Obj;
}
int countPairs2(int *arr, int len, int value) {
  return 0;
  int Obj = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = len - 1; j > i; j--) {
      if (arr[i] + arr[j] == value) {
        Obj++;
      }
    }
  }
  return Obj;
}
int countPairs3(int *arr, int len, int value) {
  return 0;
  int Obj = 0;
  for (int i = 0; i < len - 1; i++) {
    int left = i;
    int right = len;
    while (right > left + 1) {
      int newmid = (right + left) / 2;
      if (value < arr[i] + arr[newmid]) {
        right = newmid;
      } else if (value > arr[i] + arr[newmid]) {
        left = newmid;
      } else {
        Obj++;
        int count = newmid + 1;
        while (count < right && arr[i] + arr[count] == value) {
          Obj++;
          count++;
        }
        count = newmid - 1;
        while (count > left && arr[i] + arr[count] == value) {
          Obj++;
          count--;
        }
        break;
      }
    }
  }
  return Obj;
}
