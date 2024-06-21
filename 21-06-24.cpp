class Solution {
  public:
    string compareFrac(string str) {

        // Code here
     stringstream ss(str);
        string s1, s2;

        // Extract the two fractions from the input string
        getline(ss, s1, ',');
        getline(ss >> ws, s2);

        // Split the first fraction by '/'
        vector<string> sv1;
        stringstream ss1(s1);
        string w1;
        while (getline(ss1, w1, '/')) {
            sv1.push_back(w1);
        }

        // Split the second fraction by '/'
        vector<string> sv2;
        stringstream ss2(s2);
        string w2;
        while (getline(ss2, w2, '/')) {
            sv2.push_back(w2);
        }

        // Convert the string parts to integers
        int numerator1 = stoi(sv1[0]);
        int denominator1 = stoi(sv1[1]);
        int numerator2 = stoi(sv2[0]);
        int denominator2 = stoi(sv2[1]);

        // Compare the fractions by cross-multiplying to avoid floating-point precision issues
        if (numerator1 * denominator2 > numerator2 * denominator1) {
            return s1;
        } else if (numerator1 * denominator2 < numerator2 * denominator1) {
            return s2;
        } else {
            return "equal";
        }


       
    }
};
