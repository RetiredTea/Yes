int abs_min(int q[], int len_q){
    int q_min = 100000;
    int min_i;
    for(int i = 0; i < len_q; i++){
        if (abs(q[i]) < q_min){
            q_min = abs(q[i]);
            min_i = i;
        }
    }
    return min_i;
}
