#!/bin/sh
ifconfig | grep "ether" | grep -v "net" | cut -c8-24;
