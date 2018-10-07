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
   std::cout << "--------------" << std::endl;   

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


   cv.put('h');
   std::cout << "Size: " << cv.size() << " [1]" << std::endl;
   std::cout << "Character: " << cv.get(0) << " [h]" << std::endl;
   try
   {
      std::cout << cv.get(1) << std::endl;
   }
   catch (std::exception& e)
   {
      std::cerr << "Exception Caught: " << e.what() << std::endl;
   }

   cv.put('i');
   cv.put('g', 0);
   cv.put('t');
   std::cout << "Size: " << cv.size() << " [3]" << std::endl;
   std::cout << "Values: " << cv.get(0) << ":" << cv.get(1) << ":" << cv.get(2) << 
   " [g:i:t]" << std::endl;

   std::cout << "--------------" << std::endl;

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



   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   std::cout << "append double vector: " << std::endl;
   iv2.appendDoubleVector(dv);
   std::cout << "Size: " << iv2.size() << " [3]" << std::endl;
   std::cout << "Values: ";
   for (int i = 0; i < iv2.size(); i++)
   {
      std::cout << iv2.get(i) << " : ";
   }
   std::cout << std::endl;

   std::cout << "append char vector: " << std::endl;
   iv2.appendCharacterVector(cv);
   std::cout << "Size: " << iv2.size() << " [6]" << std::endl;
   std::cout << "Values: ";
   for (int i = 0; i < iv2.size(); i++)
   {
      std::cout << iv2.get(i) << " : ";
   }
   std::cout << std::endl;

   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   std::cout << "append Integer Vector: " << std::endl;
   cv2.appendIntegerVector(iv);
   std::cout << "Size: " << cv2.size() << " [3]" << std::endl;
   std::cout << "Values: "<< std::endl;
   for (int i = 0; i < cv2.size(); i++) 
   {
      std::cout << cv2.get(i) << " : ";
   }
   std::cout << std::endl;

   std::cout << "append Double Vector: " << std::endl;
   cv2.appendDoubleVector(dv);
   std::cout << "Size: " << cv2.size() << " [6]" << std::endl;
   std::cout << "Values: ";
   for (int i = 0; i < cv2.size(); i++)
   {
      std::cout << cv2.get(i) << " : ";
   }
   std::cout << std::endl;

   std::cout << "--------------------------" << std::endl;


   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   std::cout << "append integer vector:" << std::endl;
   dv2.appendIntegerVector(iv);
   std::cout << "Size: " << dv2.size() << " [3]" << std::endl;
   std::cout << "Values: ";
   for (int i = 0; i < dv2.size(); i++)
   {
      std::cout << dv2.get(i) << " : ";
   }
   std::cout << std::endl;

   std::cout << "append char vector:" << std::endl;
   dv2.appendCharacterVector(cv);
   std::cout << "Size: " << dv2.size() << " [6]" << std::endl;
   std::cout << "Values: ";
   for (int i = 0; i < dv2.size(); i++)
   {
      std::cout << dv2.get(i) << " : ";
   }
   std::cout << std::endl;

   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
