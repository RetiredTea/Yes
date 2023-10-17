int sum(int q[], int len_q, int max_i) {
	int sum_m = 0;
	for (int i = max_i; i < len_q; i++) {
		sum_m += q[i];
	}
	return sum_m;  
}
