void nForest(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

void nForest(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){ 
			cout<<"*"<<" "; 
		}
		cout<<endl;
	}
}

void nTriangle(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){ 
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void triangle(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

void seeding(int n) {
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

void nNumberTriangle(int n) {
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void nStarTriangle(int n) {
    int stars = 1;
    for(int i=1;i<=n;i++){
        // spaces 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //print
        for(int star=1;star<=stars;star++){
            cout<<"*";
        }
        stars = stars+2;
        cout<<endl;
    }
}

void nStarTriangle(int n) {
    int stars = n*2-1;
    for(int i=n;i>=1;i--){
        // n-i spaces 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //print
        for(int star=1;star<=stars;star++){
            cout<<"*";
        }
        stars = stars-2;
        cout<<endl;
    }
}

void nStarDiamond(int n) {
    int stars = 1;
    for(int i=1;i<=n;i++){
        // spaces 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //print
        for(int star=1;star<=stars;star++){
            cout<<"*";
        }
        stars = stars+2;
        cout<<endl;
    }
    stars = n*2-1;
    for(int i=n;i>=1;i--){
        // n-i spaces 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //print
        for(int star=1;star<=stars;star++){
            cout<<"*";
        }
        stars = stars-2;
        cout<<endl;
    }
}

void nStarTriangle(int n) {
    // no of rows 
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n){
            stars=2*n-i;
                }
        for(int j=1;j<=stars;j++){
        cout<<"*";
        }
        cout<<endl;
    }
}

void nBinaryTriangle(int n) {
    bool bin = 1;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            // if even it will 0 
            bin=0;
        }
        else{
            bin=1;
        }
        for(int j=1;j<=i;j++){
            cout<<bin<<" ";
            if(bin){
                bin=0;
            }
            else{
                bin=1;
            }
        }
        cout<<endl;
    }
}

void numberCrown(int n) {
    // no of rows
    int spaces = 2*(n-1);
    for(int i=1;i<=n;i++){
        // each row
        for(int j=1;j<=i;j++){
            // print numbers in ascending
            cout<<j<<" ";
        }
        // (n*2-2)spaces
        for(int space = 1;space<=spaces;space++){
            cout<<" ";
        }
        // reverse printing 
        for(int rev=i;rev>=1;rev--){
            cout<<rev<<" ";
        }
        
        cout<<endl;
        spaces = spaces-2;
    }
}

void nNumberTriangle(int n) {
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void nLetterTriangle(int n) {
    // outer loop
    // no of rows 
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=i;j++){
            cout<<(char)a<<" ";
            a++;
        }
        cout<<endl;
    }
}

void nLetterTriangle(int n) {
     for(int i=1;i<=n;i++){
        int a=65;
        for(int j=n;j>=i;j--){
            cout<<(char)a<<" ";
            a++;
        }
        cout<<endl;
    }   
}

void alphaRamp(int n) {
        int a=65;
        for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)a<<" ";
        }
        a++;
        cout<<endl;
    }  
}

void alphaHill(int n) {
    // NO OF ROWS
    int b=65;
    for(int i=1;i<=n;i++){
        // (n-1)SPACES
        for(int space=1;space<=(n-i);space++){
            cout<<" ";
        }
        // PRINT CHARS (1 to i times)
        int a = 65;
        for(int ch=1;ch<=i;ch++){
            cout<<(char)a<<" ";
            a++;
        }
        // REVERSE PRINTING starts with row-1
        int r=b;
        for(int rev=i-1;rev>=1;rev--){
            cout<<(char)r<<" ";
            r--;
        }
        if(i>1){
            b++;
        }
        cout<<endl;
    }
}

void alphaTriangle(int n) {
    for(int i=1;i<=n;i++){
        char ch= 'A'+n;
        for(int j=1;j<=i;j++){
            ch--;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


void symmetry(int n) {
    // 1st half
     int spaces=0;
     for(int i=1;i<=n;i++){
         // print
         // space
         // print
        for(int j=i;j<=n;j++){
             cout<<"*"<<" ";
         }
        for(int space=1;space<=spaces;space++){
             cout<<" ";
         }
        for(int j=i;j<=n;j++){
             cout<<"*"<<" ";
         }
        spaces+=2;
        cout<<endl;
     }
    // 2nd half
     int spacex=2*(n-1);
     for(int i=1;i<=n;i++){
         // print
         // space
         // print
        for(int j=1;j<=i;j++){ // 1 
             cout<<"*"<<" ";
         }
        for(int space=1;space<=spacex;space++){
             cout<<" ";
         }
        for(int j=1;j<=i;j++){ // 1 
             cout<<"*"<<" ";
        }
        spacex-=2;
        cout<<endl;
     }
}

void symmetry(int n) {
     int spacex=2*(n-1);
     for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){ // 1 
             cout<<"*"<<" ";
         }
        for(int space=1;space<=spacex;space++){
             cout<<" ";
         }
        for(int j=1;j<=i;j++){ // 1 
             cout<<"*"<<" ";
        }
        spacex-=2;
        cout<<endl;
     }
     int spaces=0;
     for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
             cout<<"*"<<" ";
         }
        for(int space=1;space<=spaces;space++){
             cout<<" ";
         }
        for(int j=i;j<=n;j++){
             cout<<"*"<<" ";
         }
        spaces+=2;
        cout<<endl;
     }
}

void getStarPattern(int n) {
    // first and last row full
    // first and last column full 
    // first row 
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            for(int col=1;col<=n;col++){
            cout<<"*";
            }
        }
        else{
            for(int col=1;col<=n;col++){
                if(col==1 || col==n){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}

void getNumberPattern(int n) {
    // outer loop
    for(int i=0;i<(2*n)-1;i++){
        // innerloop
        for(int j=0;j<(2*n)-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n-(min(min(top,down),min(left,right))));
        }
        cout<<"\n";
    }
}

