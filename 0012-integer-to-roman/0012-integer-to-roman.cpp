class Solution {
public:
    string intToRoman(int num) {
        map<int,string>map;
        string ans="";
        map[1]="I";
        map[4]="IV";
        map[6]="VI";
        map[7]="VII";
        map[8]="VIII";
        map[9]="IX";
        map[5]="V";
        map[10]="X";
        map[60]="LX";
        map[70]="LXX";
        map[80]="LXXX";
        map[50]="L";
        map[100]="C";
        map[600]="DC";
        map[700]="DCC";
        map[800]="DCCC";

        map[500]="D";
        map[1000]="M";
        map[40]="XL";
        map[90]="XC";
        map[400]="CD";
        map[900]="CM";
        
        int m=1000;
        int l;
        while(m>0 && num>0)
        {
            if((num/m)!=0)
            {
                l=num/m;
                if(map.count(l*m)==1)
                {
            
                  ans+=map[l*m];
                 
                }
                else{
                    while(l>0)
                    {
                       ans+=map[m];
                       l--;
                    }
                }
                 num=num%m;
                    
            }
            m=m/10;
           


        }
        return ans;



        
        
    }
};