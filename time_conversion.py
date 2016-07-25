#converts AM/PM time to military time


#!/usr/bin/env python


def main():
	time = ""
	time = raw_input()
	justhr =time.split(":")
	while (12 < int(justhr[0]) or int(justhr[0]) < 1):
		time = raw_input("enter again ")
		justhr = time.split(":")
	time = time.upper()
	ampm = time[-2:]

	if ampm == "AM":
		time = convertam(time)
	elif ampm == "PM":
		time = convertpm(time)
	else:
		print "error ! please input PM OR AM at the end "

	print time

def convertam(time):
	time = time[:-2]
	time = time.split(":")
	if time[0] == "12":
		time[0] = "00"
	time = ":".join(time)
	return time

def convertpm(time):
	time = time[:-2]
	time = time.split(":")
	if time[0] != "12":
		add = int(time[0]) + 12
		time[0] = str(add)
	time = ":".join(time)
	return time

main()







