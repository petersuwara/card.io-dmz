//
//  stripes.h
//  See the file "LICENSE.md" for the full license governing this code.
//

#ifndef DMZ_SCAN_STRIPES_H
#define DMZ_SCAN_STRIPES_H

struct StripeSum
{
  int   base_row;
  int   height;
  long  sum;
};

std::vector<StripeSum> sorted_stripes(IplImage *card_y);

#endif
