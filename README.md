This module provides alternative ways of adding products to cart.

The initial version provides a views field handler ("UC Product: Quantity input
field") that relies on the Views Form API (a part of Views 3 since RC1) to
output a quantity textfield that turns the view into an add to cart form. The
default quantity can be configured, and only products with a quantity larger
than 0 are added to the cart.