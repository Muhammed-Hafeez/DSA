const bubbleSort = (arr: number[]): number[] => {
  for (let i = 0; i < arr.length - i; i++) {
    for (let j = 1; j < arr.length; j++) {
      if (arr[i] > arr[j]) {
        let temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;