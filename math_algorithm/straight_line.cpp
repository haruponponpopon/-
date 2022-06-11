bool same(int i, int j, int k, vector<xy>&spot){
    int x1 = spot[i].x;
    int y1 = spot[i].y;
    int x2 = spot[j].x;
    int y2 = spot[j].y;
    int x3 = spot[k].x;
    int y3 = spot[k].y;
    if ((x1-x3)*(y2-y3)==(y1-y3)*(x2-x3))return true;
    else return false;
}
