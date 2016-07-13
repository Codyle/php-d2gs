/*
 * Copyright (C) 2016 HE Yaowen <he.yaowen@hotmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "ext/standard/info.h"
#include "php_d2gs.h"

PHP_MINIT_FUNCTION(d2gs)
{
    return SUCCESS;
}

PHP_RINIT_FUNCTION(d2gs)
{
    return SUCCESS;
}

PHP_MSHUTDOWN_FUNCTION(d2gs)
{
    return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION(d2gs)
{
    return SUCCESS;
}

PHP_MINFO_FUNCTION(d2gs)
{
    php_info_print_table_start();
    php_info_print_table_header(2, "d2gs support", "enabled");
    php_info_print_table_end();
}

zend_module_entry d2gs_module_entry = {
    STANDARD_MODULE_HEADER,
    "d2gs",
    NULL,
    PHP_MINIT(d2gs),
    PHP_MSHUTDOWN(d2gs),
    PHP_RINIT(d2gs),
    PHP_RSHUTDOWN(d2gs),
    PHP_MINFO(d2gs),
    PHP_D2GS_VERSION,
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_D2GS
ZEND_GET_MODULE(d2gs)
#endif
