// first example
using System;

	class HelloWorld {
  		static void Main() {
    			Console.WriteLine("Hello World");
  		}
	}

// second example
using System;
	class Project {
    		static void Main() {
       			int rate = 100;
        			int days = 22;
        			ShowWages(rate, days);
        			}
    		public static void ShowWages(int rate, int days) {
       			 Console.WriteLine("sum: " + rate * days);
        		}

	}