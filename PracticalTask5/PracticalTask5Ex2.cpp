int* max_vect(int len, int* array1, int* array2) {
	int* maxNums = new int[len];
	for (int i = 0; i < len; i++) {
		maxNums[i] = (array1[i] > array2[i]) ? array1[i] : array2[i];
	}
	return maxNums;
}