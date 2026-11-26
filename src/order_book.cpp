#include "order_book.hpp"

// Place order in the book
// Match against opposite side of book
// If quantity remains, add to book
void OrderBook::submit_limit_order(Order &order)
{
}

// Cancel an existing order
bool OrderBook::cancel_order(uint32_t order_id)
{
}

std::optional<uint32_t> OrderBook::best_bid()
{
}

std::optional<uint32_t> OrderBook::best_ask()
{
}
