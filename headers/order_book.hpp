#pragma once

#include <cstdint>
#include <map>
#include <deque>
#include <vector>
#include <optional>

enum class Side
{
    Buy,
    Sell
};

struct Order
{
    uint32_t order_id;
    uint32_t price;
    uint32_t remaining_quantity;
    Side side;
    uint32_t arrival_sequence_number;
};

class OrderBook
{
public:
    OrderBook() {}
    ~OrderBook() {}

    // Submit a new limit order.
    void submit_limit_order(Order &order);

    // Cancel an existing order
    bool cancel_order(uint32_t order_id);

    // Return best bid and ask
    std::optional<uint32_t> best_bid();
    std::optional<uint32_t> best_ask();

private:
    std::map<uint32_t, std::deque<Order>> bids;
    std::map<uint32_t, std::deque<Order>> asks;
};
