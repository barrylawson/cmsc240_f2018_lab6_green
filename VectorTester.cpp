#include <iostream>
#include "IntegerVector.h"
#include "DoubleVector.h"
#include "CharacterVector.h"

int main()
{
   IntegerVector   iv;
   DoubleVector    dv;
   CharacterVector cv;



   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;

   iv.put(118);
   std::cout << "Size: " << iv.size() << " [1]" << std::endl;
   std::cout << "Value: " << iv.get(0) << " [118]" << std::endl;
   try
   {
      std::cout << iv.get(1) << std::endl;
   }
   catch (std::exception& e)
   {
      std::cerr << "Exception Caught: " << e.what() << std::endl;
   }

   iv.put(105);
   iv.put(33, 0);
   iv.put(118);
   std::cout << "Size: " << iv.size() << " [3]" << std::endl;
   std::cout << "Values: " << iv.get(0) << ":" << iv.get(1) << ":" << iv.get(2) << 
   " [33:105:118]" << std::endl;

   std::cout << "--------------" << std::endl;

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << "----------------" << std::endl;

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   std::cout << "-------------" << std::endl;


   dv.put(65.0);
   std::cout << "Size: " << dv.size() << " [1]" << std::endl;
   std::cout << "Value: " << dv.get(0) << " [65.0]" << std::endl;
   try
   {
      std::cout << dv.get(1) << std::endl;
   }
   catch (std::exception& e)
   {
      std::cerr << "Exception Caught: " << e.what() << std::endl;
   }

   dv.put(66.0);
   dv.put(67.0, 0);
   dv.put(68.0);
   std::cout << "Size: " << dv.size() << " [3]" << std::endl;
   std::cout << "Values: " << dv.get(0) << ":" << dv.get(1) << ":" << dv.get(2) << 
   " [67.0:66.0:68.0]" << std::endl;

   std::cout << "--------------" << std::endl;


   /*for(int i = 0; i < 5; i++)
   {
      dv.put(i+3.2);
   }


   std::cout << "Original DoubleVector (tests get method):" << std::endl;
   for (int i = 0; i < 5; i++)
   {
      std::cout << dv.get(i) << std:: endl;
   }

   std::cout << "Put 1.0 in index 1 and print index 1:" << std::endl;
   dv.put(1.0, 1);
   std::cout << dv.get(1) << " [1.0]" << std:: endl;

   std::cout << "Put 3.0 the end:" << std::endl;
   dv.put(3.0);
   std::cout << dv.get(6) << std:: endl;


   std::cout << "Size method:" << std::endl;
   std::cout << dv.size() << "[6]" <<std::endl;

   std::cout << "When index is out_of_range" << std::endl;

   try{
      dv.put(2.0, 100);
   } catch(const std::exception& e) {
      std::cout << "Exception caught:" << e.what() << std::endl;
   }

   try{
      dv.put(2.0, -1);
   } catch(const std::exception& e) {
      std::cout << "Exception caught:" << e.what() << std::endl;
   }
   */



   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;

   iv2.appendDoubleVector(dv);
   iv2.appendCharacterVector(cv);
   std::cout << "Size: " << iv2.size() << " [2]" << std::endl;
   std::cout << "Values: " << iv2.get(0) << ":" << iv2.get(6) << " [:]" << std::endl;

   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
