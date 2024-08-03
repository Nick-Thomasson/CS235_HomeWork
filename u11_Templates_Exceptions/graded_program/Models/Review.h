#ifndef _Review_Header
#define _Review_Header

#include <iostream>
#include <vector>
#include <string>

// Cannot leave negative review

//! A user review and score that can be left on a product
struct Review
{
    //! Unique ID of this Review item
    int id{-1};
    //! ID of the Product being reviewed
    int product_id{-1};
    //! ID of the Account that created the review
    int reviewer_account_id{-1};
    //! Review text
    std::string review_text{"unset"};
    //! Star rating given with this review (1-5)
    int star_rating{-1};
};

#endif
