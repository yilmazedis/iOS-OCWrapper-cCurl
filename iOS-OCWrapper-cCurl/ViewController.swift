//
//  ViewController.swift
//  iOS-OCWrapper-cCurl
//
//  Created by Yilmaz Edis on 2022/7/19.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.

        let request = RequestWithCurlWrapper()
        request.sendRequest()
    }
}
