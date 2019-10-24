# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|
  config.vm.box = "hashicorp/bionic64"
    
  config.vm.provider "virtualbox" do |v|
    v.name = "Avrdude VM"
    v.customize [ "guestproperty", "set", :id, "/VirtualBox/GuestAdd/VBoxService/--timesync-set-threshold", 1000 ]
    v.customize ["modifyvm", :id, "--usb", "on"]
    v.customize ["modifyvm", :id, "--usbehci", "on"]
    v.customize ["usbfilter", "add", "0",
                 "--target", :id,
                 "--name", "Arduino Micro",
                 "--vendorid", "2341",
                 "--productid", "0037",
                 "--remote", "no"]
  end

  config.vm.provision "shell", privileged: false, inline: <<-SHELL 
    sudo -H DEBIAN_FRONTEND=noninteractive apt-get update
    sudo -H DEBIAN_FRONTEND=noninteractive apt-get -yq install binutils gcc-avr avr-libc uisp avrdude flex byacc bison
   SHELL

end

